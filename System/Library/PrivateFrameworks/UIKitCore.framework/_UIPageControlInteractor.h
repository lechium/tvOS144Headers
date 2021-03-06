/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIHyperInteractor;

@interface _UIPageControlInteractor : NSObject {

	double _scrubbingOffset;
	double _lowerBound;
	double _upperBound;
	_UIHyperInteractor* _interactor;

}

@property (nonatomic,retain) _UIHyperInteractor * interactor;                //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,readonly) double joggingDistance; 
@property (nonatomic,readonly) double unconstrainedPosition; 
@property (nonatomic,readonly) double boundedScrubPosition; 
@property (nonatomic,readonly) double unboundedScrubPosition; 
@property (nonatomic,readonly) double hyperConstrainedPosition; 
-(_UIHyperInteractor *)interactor;
-(void)setInteractor:(_UIHyperInteractor *)arg1 ;
-(double)unboundedScrubPosition;
-(double)unconstrainedPosition;
-(id)initWithMaximumDistance:(double)arg1 ;
-(double)joggingDistance;
-(double)hyperConstrainedPosition;
-(double)boundedScrubPosition;
-(void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2 ;
-(void)setTranslation:(double)arg1 velocity:(double)arg2 ;
-(void)commitTranslation;
-(void)reduceScrubOffsetByRatio:(double)arg1 ;
-(void)reduceScrubOffsetByOffset:(double)arg1 ;
@end

