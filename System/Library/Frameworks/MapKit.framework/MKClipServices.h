/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface MKClipServices : NSObject {

	NSObject*<OS_dispatch_queue> _removeNonAvailableAppClipLinksQueue;
	NSObject*<OS_dispatch_queue> _requestAppClipMetadataQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)appClipWithQuickLink:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAppClip:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

