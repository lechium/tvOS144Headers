/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>

@protocol CKSQLiteItem;
@class CKDPCSCache;

@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo {

	id<CKSQLiteItem> _itemID;
	CKDPCSCache* _cache;
	unsigned long long _options;

}

@property (nonatomic,retain) id<CKSQLiteItem> itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) CKDPCSCache * cache;                     //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(CKDPCSCache *)cache;
-(id<CKSQLiteItem>)itemID;
-(void)setItemID:(id<CKSQLiteItem>)arg1 ;
-(void)setCache:(CKDPCSCache *)arg1 ;
@end

