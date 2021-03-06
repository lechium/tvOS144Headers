/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, TDEffectParameterType, TDEffectComponent;

@interface TDEffectParameterValue : NSManagedObject

@property (nonatomic,retain) NSNumber * intValue; 
@property (nonatomic,retain) NSNumber * floatValue; 
@property (nonatomic,retain) NSNumber * colorValue; 
@property (nonatomic,retain) NSNumber * angleValue; 
@property (nonatomic,retain) TDEffectParameterType * parameterType; 
@property (nonatomic,retain) TDEffectComponent * component; 
@property (assign,nonatomic) unsigned long long redComponent; 
@property (assign,nonatomic) unsigned long long greenComponent; 
@property (assign,nonatomic) unsigned long long blueComponent; 
+(id)keyPathsForValuesAffectingColor;
+(id)keyPathsForValuesAffectingRedComponent;
+(id)keyPathsForValuesAffectingGreenComponent;
+(id)keyPathsForValuesAffectingBlueComponent;
-(void)setRedComponent:(unsigned long long)arg1 ;
-(void)setGreenComponent:(unsigned long long)arg1 ;
-(void)setBlueComponent:(unsigned long long)arg1 ;
-(unsigned long long)redComponent;
-(unsigned long long)greenComponent;
-(unsigned long long)blueComponent;
@end

