// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInformationScript.h"

#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"

FString UPlayerInformationScript::GetName()
{
	FString Name = "unknown name";
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if(IOnlineIdentityPtr IdentityPtr = OnlineSubsystem->GetIdentityInterface())
	{
		Name = IdentityPtr->GetPlayerNickname(0);
	}
	return Name;
	
}
