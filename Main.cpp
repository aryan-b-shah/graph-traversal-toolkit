#include <iostream>
using namespace std;

int main(){

    // start of the initial pipeline that loads the test case file stream from std::cin
int numOfVertices;
    int numOfEdges;
   
    if(!std::cin.eof()){
        std::cin >> numOfVertices;
        std::cin >> numOfEdges;
        
    }
    else{
        std::cout<<"Input not found!"<<std::endl;
        return 0;
    }
    //declaring the Graph g with number of vertices
    int g[numOfVertices][numOfVertices] ;
    int oddvertex[numOfVertices],tracker=0,count=0,max=100000000;
    
    //Loop to initialise the graph content as 0
    for(int i=0;i<numOfVertices;i++){
        for(int j=0;j<numOfVertices;j++)
        {
            
            g[i][j]=0;
           
        }
        oddvertex[i]=0;
    }
    
    while(!std::cin.eof()){
        int startVertice;
        int endVertice;
        std::cin >> startVertice;
        std::cin >> endVertice;
        //Edge* newEdge = new Edge(startVertice, endVertice);

        // Here is where you load up the Graph object
                
        g[startVertice-1][endVertice-1] = 1;
        g[endVertice-1][startVertice-1] = 1;
    } 

   
   //Loop to print Adjacency Matrix
   cout<<"\n"<<"The adjacency matrix of G:"<<endl;
    for(int i=0;i<numOfVertices;i++){
        for(int j=0;j<numOfVertices;j++)
        {
            cout<<g[i][j]<<" ";
            if(g[i][j]==1)
            {
                tracker++;
            }
        }
        if(tracker%2!=0)
        {
            oddvertex[count]=i+1;
            count++;}
            tracker=0;
        cout<<""<<endl;
        }

    //Loop to print the number of odd vertices
    cout<<"\n"<<endl;
    cout<<"The odd degree vertices in G:"<<endl;
    cout<<"O = { ";
    int i=0;
    while(oddvertex[i]!=0)
    {
        cout<<oddvertex[i]<<" ";
        i++;
    }
    cout<<"}"<<endl;
    cout<<"\n"<<endl;
    i=0;
    //Findng the shortest path to all vertices

    while(oddvertex[i]!=0) {
        int src = oddvertex[i]-1;
        int dist[numOfVertices];
        bool sptSet[numOfVertices];
        
        for (int j = 0; j < numOfVertices; j++)
            dist[j] = max, sptSet[j] = false;
        
        dist[src] = 0;
        
        for (int count = 0; count < numOfVertices - 1; count++) {
            int u, min = max;
            for (int v = 0; v < numOfVertices; v++) {
                if (!sptSet[v] && dist[v] <= min) {
                    min = dist[v];
                    u = v;
                }
            }
            
            sptSet[u] = true;
            
            for (int v = 0; v < numOfVertices; v++)
                if (!sptSet[v] && g[u][v] && dist[u] != max && dist[u] + g[u][v] < dist[v])
                    dist[v] = dist[u] + g[u][v];
        }
        
        cout << "Single source shortest path lengths from node " << src+1 << ":" << endl;
        for (int j = 0; j < numOfVertices; j++)
            cout << j+1 << ": " << dist[j] << endl;
        cout << endl;
        i++;
    }

    return 0;
}