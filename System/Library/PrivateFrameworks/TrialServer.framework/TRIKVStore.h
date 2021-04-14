/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRIKVStore : NSObject {

	TRIDatabase* _db;

}
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(id)blobForKey:(id)arg1 usingTransaction:(id)arg2 ;
-(void)setBlob:(id)arg1 forKey:(id)arg2 usingTransaction:(id)arg3 ;
-(void)removeBlobForKey:(id)arg1 usingTransaction:(id)arg2 ;
@end

