/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPURLMediaItem.h>

@class TVPSecureKeyDeliveryCoordinator;

@interface _TVURLMediaItem : TVPURLMediaItem {

	TVPSecureKeyDeliveryCoordinator* _secureKeyDeliveryCoordinator;

}
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(void)cleanUpMediaItem;
@end

