
// func pointer

typedef void (*orbit_time_ptr)(void*); 

typedef struct {
    
    int* dayLength;
    int* currentSpeed;
    int* objectMass;
    char* atmosphereType;
    orbit_time_ptr orbitTimeFunc;  // function which can be overwritten
} planet_t; 

