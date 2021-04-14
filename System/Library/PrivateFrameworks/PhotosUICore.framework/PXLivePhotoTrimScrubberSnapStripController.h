/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXLivePhotoTrimScrubberSnapStripControllerSpec, PXLivePhotoTrimScrubber, PXSnapStripView;

@interface PXLivePhotoTrimScrubberSnapStripController : NSObject {

	BOOL _allowStartEndTimeSnapIndicators;
	PXLivePhotoTrimScrubberSnapStripControllerSpec* _spec;
	PXLivePhotoTrimScrubber* _trimScrubber;
	PXSnapStripView* _snapStripView;

}

@property (nonatomic,retain) PXLivePhotoTrimScrubberSnapStripControllerSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) PXLivePhotoTrimScrubber * trimScrubber;                             //@synthesize trimScrubber=_trimScrubber - In the implementation block
@property (nonatomic,retain) PXSnapStripView * snapStripView;                                    //@synthesize snapStripView=_snapStripView - In the implementation block
@property (assign,nonatomic) BOOL allowStartEndTimeSnapIndicators;                               //@synthesize allowStartEndTimeSnapIndicators=_allowStartEndTimeSnapIndicators - In the implementation block
-(PXLivePhotoTrimScrubberSnapStripControllerSpec *)spec;
-(void)setSpec:(PXLivePhotoTrimScrubberSnapStripControllerSpec *)arg1 ;
-(id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(SCD_Struct_PX8)arg2 style:(unsigned long long)arg3 skipSingleIndicatorWithCurrentTime:(BOOL)arg4 skipDefaultTimeIndicator:(BOOL)arg5 ;
-(id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(SCD_Struct_PX8)arg2 suggestedTime:(SCD_Struct_PX8)arg3 style:(unsigned long long)arg4 skipSingleIndicatorWithCurrentTime:(BOOL)arg5 skipDefaultTimeIndicator:(BOOL)arg6 ;
-(void)updateSnapStripView;
-(void)updateSnapStripViewAnimated:(BOOL)arg1 ;
-(PXLivePhotoTrimScrubber *)trimScrubber;
-(void)setTrimScrubber:(PXLivePhotoTrimScrubber *)arg1 ;
-(PXSnapStripView *)snapStripView;
-(void)setSnapStripView:(PXSnapStripView *)arg1 ;
-(BOOL)allowStartEndTimeSnapIndicators;
-(void)setAllowStartEndTimeSnapIndicators:(BOOL)arg1 ;
@end

