#include "Game.h"
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

Game::Game()
{
    std::cout << "Game constructor called\n";
}

Game::~Game()
{
    std::cout << "Game destructor called\n";
}

void Game::Initialize()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        std::cerr << "Error initializing SDL.\n";
        return;
    }

    SDL_Window *window = SDL_CreateWindow("Test Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          800, 600, SDL_WINDOW_BORDERLESS);

    if (!window) {
        std::cerr << "Error creating SDL window.\n";
        return;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {
        std::cerr << "Error creating SDL renderer.\n";
        return;
    }
}

void Game::Run()
{
    while (true)
    {
        ProcessInput();
        Update();
        Render();
    }
}

void Game::ProcessInput()
{
}

void Game::Update()
{
}

void Game::Render()
{
}

void Game::Destroy()
{
}