/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSRecursiveLock, NSMutableArray;

@interface ASCPendingPromises : NSObject {

	NSRecursiveLock* _stateLock;
	NSMutableArray* _binaryPromisesIfLoaded;
	NSMutableArray* _promisesIfLoaded;

}

@property (nonatomic,readonly) NSRecursiveLock * stateLock;                        //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * binaryPromisesIfLoaded;              //@synthesize binaryPromisesIfLoaded=_binaryPromisesIfLoaded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * binaryPromises; 
@property (nonatomic,retain) NSMutableArray * promisesIfLoaded;                    //@synthesize promisesIfLoaded=_promisesIfLoaded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * promises; 
-(id)init;
-(NSRecursiveLock *)stateLock;
-(NSMutableArray *)promises;
-(void)cancelAll;
-(void)finishAllWithError:(id)arg1 ;
-(void)addPromise:(id)arg1 ;
-(void)addBinaryPromise:(id)arg1 ;
-(NSMutableArray *)binaryPromisesIfLoaded;
-(void)setBinaryPromisesIfLoaded:(NSMutableArray *)arg1 ;
-(NSMutableArray *)promisesIfLoaded;
-(void)setPromisesIfLoaded:(NSMutableArray *)arg1 ;
-(NSMutableArray *)binaryPromises;
-(void)enumerateBinaryPromises:(/*^block*/id)arg1 andPromises:(/*^block*/id)arg2 ;
-(BOOL)containsBinaryPromise:(id)arg1 ;
-(BOOL)containsPromise:(id)arg1 ;
@end

