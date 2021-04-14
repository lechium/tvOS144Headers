/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVLLegacyJSContext;

@interface TVLJSSlideShow : NSObject {

	TVLLegacyJSContext* _context;

}

@property (nonatomic,retain) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
-(TVLLegacyJSContext *)context;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)showSlideShowSettingsWithImageProxies:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runSlideShowWithImageProxies:(id)arg1 startingIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end
