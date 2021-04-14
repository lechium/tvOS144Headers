/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface _MXAssetStorage : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableDictionary* _storage;
	NSMutableSet* _loadingKeys;
	NSMutableDictionary* _fetchBlocks;

}
-(id)init;
-(void)setAsset:(id)arg1 forKey:(id)arg2 ;
-(void)loadAssetForKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchAssetForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

