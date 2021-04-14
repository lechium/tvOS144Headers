/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLDictionaryFeedResource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface TVLPreferenceFeedResource : TVLDictionaryFeedResource {

	NSString* _path;
	BOOL _dirty;
	NSObject*<OS_dispatch_queue> _prefsWriteQueue;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setFeedResource:(id)arg1 named:(id)arg2 ;
-(void)_savePrefs;
-(void)clearFeedResources;
@end
