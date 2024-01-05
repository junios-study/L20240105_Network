// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPC.h"
#include "Network.h"


void AMyPC::BeginPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("BeginPlay 실행전"));

	Super::BeginPlay();

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("BeginPlay 실행전"));
}
