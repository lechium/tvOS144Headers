/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/CompoundClip.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class IrisClipStyle, NSArray, IrisMovieClip, NSString;

@interface IrisClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation> {

	unsigned long long _irisStyle;
	IrisClipStyle* _irisClipStyle;
	NSArray* _containedClips;
	IrisMovieClip* _introClip;
	IrisMovieClip* _outroClip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IrisClipStyle * irisClipStyle;              //@synthesize irisClipStyle=_irisClipStyle - In the implementation block
@property (nonatomic,retain) NSArray * containedClips;                   //@synthesize containedClips=_containedClips - In the implementation block
@property (nonatomic,retain) IrisMovieClip * introClip;                  //@synthesize introClip=_introClip - In the implementation block
@property (nonatomic,retain) IrisMovieClip * outroClip;                  //@synthesize outroClip=_outroClip - In the implementation block
@property (assign,nonatomic) unsigned long long irisStyle;               //@synthesize irisStyle=_irisStyle - In the implementation block
@property (nonatomic,readonly) double minimumDuration; 
@property (nonatomic,readonly) double idealDuration; 
@property (nonatomic,readonly) double maximumDuration; 
@property (nonatomic,readonly) BOOL introClipAvailable; 
@property (nonatomic,readonly) BOOL outroClipAvailable; 
+(id)allowedTransitions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumDuration;
-(void)setAudioVolume:(float)arg1 ;
-(int)maxDuration;
-(double)minimumDuration;
-(NSArray *)containedClips;
-(BOOL)isIris;
-(unsigned long long)irisStyle;
-(void)setAltAspect:(double)arg1 ;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(IrisMovieClip *)introClip;
-(double)idealDuration;
-(void)setIrisStyle:(unsigned long long)arg1 ;
-(void)setContainedClips:(NSArray *)arg1 ;
-(void)setMinimumPhotoDuration:(double)arg1 ;
-(void)setIdealPhotoDuration:(double)arg1 ;
-(void)setMaximumPhotoDuration:(double)arg1 ;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setIntroClip:(IrisMovieClip *)arg1 ;
-(void)setOutroClip:(IrisMovieClip *)arg1 ;
-(IrisClipStyle *)irisClipStyle;
-(void)setIrisClipStyle:(IrisClipStyle *)arg1 ;
-(NSRange)preferredInTransitionDurationRange;
-(NSRange)preferredOutTransitionDurationRange;
-(BOOL)introClipAvailable;
-(BOOL)outroClipAvailable;
-(IrisMovieClip *)outroClip;
@end

