/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIViewSpringAnimationDescription : NSObject {

	BOOL _usesDampingRatioAndResponse;
	double _tension;
	double _friction;
	SCD_Struct_UI150 _parameters;

}

@property (assign,nonatomic) BOOL usesDampingRatioAndResponse;              //@synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse - In the implementation block
@property (assign,nonatomic) double tension;                                //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                               //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI150 parameters;                   //@synthesize parameters=_parameters - In the implementation block
+(id)descriptionWithTension:(double)arg1 friction:(double)arg2 ;
+(id)descriptionWithSpringAnimationParameters:(SCD_Struct_UI150)arg1 ;
-(SCD_Struct_UI150)parameters;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(void)setParameters:(SCD_Struct_UI150)arg1 ;
-(double)tension;
-(void)setTension:(double)arg1 ;
-(BOOL)usesDampingRatioAndResponse;
-(void)setUsesDampingRatioAndResponse:(BOOL)arg1 ;
@end

