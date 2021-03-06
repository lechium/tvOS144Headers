/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController, NSNumber;

@interface TVPRelatedContent : NSObject {

	UIViewController* _detailViewController;
	UIViewController* _optionsViewController;
	NSNumber* _durationUntilPlaybackWillAdvance;

}

@property (nonatomic,retain) UIViewController * detailViewController;                //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,retain) UIViewController * optionsViewController;               //@synthesize optionsViewController=_optionsViewController - In the implementation block
@property (nonatomic,copy) NSNumber * durationUntilPlaybackWillAdvance;              //@synthesize durationUntilPlaybackWillAdvance=_durationUntilPlaybackWillAdvance - In the implementation block
-(UIViewController *)detailViewController;
-(void)setDetailViewController:(UIViewController *)arg1 ;
-(void)setOptionsViewController:(UIViewController *)arg1 ;
-(NSNumber *)durationUntilPlaybackWillAdvance;
-(void)setDurationUntilPlaybackWillAdvance:(NSNumber *)arg1 ;
-(UIViewController *)optionsViewController;
@end

