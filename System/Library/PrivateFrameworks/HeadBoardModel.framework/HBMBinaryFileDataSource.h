/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardModel/HeadBoardModel-Structs.h>
#import <HeadBoardModel/HBMFileDataSource.h>
#import <libobjc.A.dylib/HBMDataSource.h>
#import <libobjc.A.dylib/HBMDataSink.h>

@class HBMStoreCollection, NSString;

@interface HBMBinaryFileDataSource : HBMFileDataSource <HBMDataSource, HBMDataSink> {

	BOOL _needsReload;
	os_unfair_lock_s _lock;
	HBMStoreCollection* _collection;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL needsReload;                                     //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic,__weak) id<HBMDataSourceDelegate> delegate; 
@property (nonatomic,copy,readonly) HBMStoreCollection * collection; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_baseClassSetForSecureDecoding;
-(os_unfair_lock_s)lock;
-(HBMStoreCollection *)collection;
-(void)presentedItemDidChange;
-(BOOL)load:(id*)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(BOOL)isReadOnly;
-(void)setCollection:(HBMStoreCollection *)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)needsReload;
-(BOOL)_readFromData:(id)arg1 originalURL:(id)arg2 error:(id*)arg3 ;
@end

