/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CKSyncEngineBatch : NSObject {

	BOOL _atomic;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;

}

@property (assign,getter=isAtomic,nonatomic) BOOL atomic;                //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,readonly) NSArray * recordsToSave;                  //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,readonly) NSArray * recordIDsToDelete;              //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
-(id)description;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDsToDelete;
-(BOOL)isAtomic;
-(void)setAtomic:(BOOL)arg1 ;
@end

