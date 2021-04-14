/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OpusKit/OpusKit-Structs.h>
@class NSArray;

@interface OKPanGenerator : NSObject {

	NSArray* _panSteps;
	BOOL _isReversed;
	BOOL _loops;
	double _mediaItemAspectRatio;
	NSArray* _mediaItemRegionsOfInterest;
	unsigned long long _panningType;
	unsigned long long _randomizer;
	CGRect _referenceFrame;

}

@property (assign,nonatomic) double mediaItemAspectRatio;                       //@synthesize mediaItemAspectRatio=_mediaItemAspectRatio - In the implementation block
@property (nonatomic,retain) NSArray * mediaItemRegionsOfInterest;              //@synthesize mediaItemRegionsOfInterest=_mediaItemRegionsOfInterest - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                             //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) unsigned long long panningType;                    //@synthesize panningType=_panningType - In the implementation block
@property (assign,nonatomic) unsigned long long randomizer;                     //@synthesize randomizer=_randomizer - In the implementation block
@property (assign,nonatomic) BOOL isReversed;                                   //@synthesize isReversed=_isReversed - In the implementation block
@property (assign,nonatomic) BOOL loops;                                        //@synthesize loops=_loops - In the implementation block
-(id)init;
-(void)dealloc;
-(CGRect)referenceFrame;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(id)initWithAspectRatio:(double)arg1 ;
-(id)_panStepWithRelativeFrame:(CGRect)arg1 forFittingMode:(unsigned long long)arg2 anchorPoint:(CGPoint)arg3 andExtraScale:(double)arg4 ;
-(CGRect)_frameWithAspectRatio:(double)arg1 forFittingMode:(unsigned long long)arg2 andAnchorPoint:(CGPoint)arg3 ;
-(id)_panStepWithRelativeFrame:(CGRect)arg1 forFittingMode:(unsigned long long)arg2 andAnchorPoint:(CGPoint)arg3 ;
-(CGRect)_fullROI;
-(void)_updatePanSteps;
-(void)enumeratePanStepsWithBlock:(/*^block*/id)arg1 ;
-(double)mediaItemAspectRatio;
-(void)setMediaItemAspectRatio:(double)arg1 ;
-(NSArray *)mediaItemRegionsOfInterest;
-(void)setMediaItemRegionsOfInterest:(NSArray *)arg1 ;
-(unsigned long long)panningType;
-(void)setPanningType:(unsigned long long)arg1 ;
-(unsigned long long)randomizer;
-(void)setRandomizer:(unsigned long long)arg1 ;
-(BOOL)isReversed;
-(void)setIsReversed:(BOOL)arg1 ;
@end

