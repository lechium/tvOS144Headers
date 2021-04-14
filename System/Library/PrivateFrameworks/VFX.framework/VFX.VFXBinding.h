/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol VFX.VFXBinding
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * objectName; 
@property (readonly,nonatomic) NSString * bindingName; 
@property (readonly,nonatomic) long long type; 
@property (readonly,nonatomic) long long semantic; 
@property (readonly,nonatomic) double min; 
@property (readonly,nonatomic) double max; 
@required
-(long long)type;
-(NSString *)identifier;
-(double)max;
-(double)min;
-(long long)semantic;
-(NSString *)objectName;
-(NSString *)bindingName;

@end
