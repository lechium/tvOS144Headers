/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface _UIPageControlPlatterSettings : PTSettings {

	double _expandedScale;
	double _stretchX;
	double _stretchY;
	double _rbStretchLimit;
	double _dampingRatio;
	double _platterResponse;
	double _scrubResponse;
	double _dampingRatioSmoothing;
	double _responseSmoothing;
	double _targetSmoothing;
	double _targetDeceleration;
	double _jogRateBase;
	double _jogMaxDotSpan;
	double _jogInitialVal;
	double _hapticsBookEnd;
	double _hapticsJogging;
	double _panDistanceThreshold;
	long long _pagesRequiredForScrubbing;
	double _flickVelocityThreshold;

}

@property (assign,nonatomic) double expandedScale;                             //@synthesize expandedScale=_expandedScale - In the implementation block
@property (assign,nonatomic) double stretchX;                                  //@synthesize stretchX=_stretchX - In the implementation block
@property (assign,nonatomic) double stretchY;                                  //@synthesize stretchY=_stretchY - In the implementation block
@property (assign,nonatomic) double rbStretchLimit;                            //@synthesize rbStretchLimit=_rbStretchLimit - In the implementation block
@property (assign,nonatomic) double dampingRatio;                              //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) double platterResponse;                           //@synthesize platterResponse=_platterResponse - In the implementation block
@property (assign,nonatomic) double scrubResponse;                             //@synthesize scrubResponse=_scrubResponse - In the implementation block
@property (assign,nonatomic) double dampingRatioSmoothing;                     //@synthesize dampingRatioSmoothing=_dampingRatioSmoothing - In the implementation block
@property (assign,nonatomic) double responseSmoothing;                         //@synthesize responseSmoothing=_responseSmoothing - In the implementation block
@property (assign,nonatomic) double targetSmoothing;                           //@synthesize targetSmoothing=_targetSmoothing - In the implementation block
@property (assign,nonatomic) double targetDeceleration;                        //@synthesize targetDeceleration=_targetDeceleration - In the implementation block
@property (assign,nonatomic) double jogRateBase;                               //@synthesize jogRateBase=_jogRateBase - In the implementation block
@property (assign,nonatomic) double jogMaxDotSpan;                             //@synthesize jogMaxDotSpan=_jogMaxDotSpan - In the implementation block
@property (assign,nonatomic) double jogInitialVal;                             //@synthesize jogInitialVal=_jogInitialVal - In the implementation block
@property (assign,nonatomic) double hapticsBookEnd;                            //@synthesize hapticsBookEnd=_hapticsBookEnd - In the implementation block
@property (assign,nonatomic) double hapticsJogging;                            //@synthesize hapticsJogging=_hapticsJogging - In the implementation block
@property (assign,nonatomic) double panDistanceThreshold;                      //@synthesize panDistanceThreshold=_panDistanceThreshold - In the implementation block
@property (assign,nonatomic) long long pagesRequiredForScrubbing;              //@synthesize pagesRequiredForScrubbing=_pagesRequiredForScrubbing - In the implementation block
@property (assign,nonatomic) double flickVelocityThreshold;                    //@synthesize flickVelocityThreshold=_flickVelocityThreshold - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)dampingRatio;
-(void)setDampingRatio:(double)arg1 ;
-(void)setExpandedScale:(double)arg1 ;
-(void)setStretchX:(double)arg1 ;
-(void)setStretchY:(double)arg1 ;
-(void)setPanDistanceThreshold:(double)arg1 ;
-(void)setRbStretchLimit:(double)arg1 ;
-(void)setJogRateBase:(double)arg1 ;
-(void)setJogMaxDotSpan:(double)arg1 ;
-(void)setJogInitialVal:(double)arg1 ;
-(void)setFlickVelocityThreshold:(double)arg1 ;
-(void)setPagesRequiredForScrubbing:(long long)arg1 ;
-(void)setHapticsJogging:(double)arg1 ;
-(void)setHapticsBookEnd:(double)arg1 ;
-(void)setPlatterResponse:(double)arg1 ;
-(void)setScrubResponse:(double)arg1 ;
-(void)setDampingRatioSmoothing:(double)arg1 ;
-(void)setResponseSmoothing:(double)arg1 ;
-(void)setTargetSmoothing:(double)arg1 ;
-(void)setTargetDeceleration:(double)arg1 ;
-(double)expandedScale;
-(double)stretchX;
-(double)stretchY;
-(double)rbStretchLimit;
-(double)platterResponse;
-(double)scrubResponse;
-(double)dampingRatioSmoothing;
-(double)responseSmoothing;
-(double)targetSmoothing;
-(double)targetDeceleration;
-(double)jogRateBase;
-(double)jogMaxDotSpan;
-(double)jogInitialVal;
-(double)hapticsBookEnd;
-(double)hapticsJogging;
-(double)panDistanceThreshold;
-(long long)pagesRequiredForScrubbing;
-(double)flickVelocityThreshold;
@end

