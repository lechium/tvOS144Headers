/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVCKSearchSiriContextDelegate;
#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
@class NSString;

@interface TVCKSearchSiriContext : NSObject {

	struct {
		unsigned _respondsToDidSelectContentItemInPartialScreenPluginMode : 1;
		unsigned _respondsToDidPlayContentItemInPartialScreenPluginMode : 1;
		unsigned _respondsToFetchNextBatch : 1;
		unsigned _respondsToSendMetricsWithCategory : 1;
	}  _delegateFlags;
	id<TVCKSearchSiriContextDelegate> _delegate;
	NSString* _pluginMode;

}

@property (assign,nonatomic,__weak) id<TVCKSearchSiriContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pluginMode;                                            //@synthesize pluginMode=_pluginMode - In the implementation block
-(id)description;
-(id)init;
-(id<TVCKSearchSiriContextDelegate>)delegate;
-(void)setDelegate:(id<TVCKSearchSiriContextDelegate>)arg1 ;
-(NSString *)pluginMode;
-(void)_didSelectContentItemInPartialScreenPluginMode:(id)arg1 ;
-(void)_didPlayContentItemInPartialScreenPluginMode:(id)arg1 ;
-(void)_fetchNextBatch:(id)arg1 ;
-(void)_sendMetricsWithCategory:(id)arg1 info:(id)arg2 ;
-(id)initWithPluginMode:(id)arg1 ;
-(void)setPluginMode:(NSString *)arg1 ;
@end

