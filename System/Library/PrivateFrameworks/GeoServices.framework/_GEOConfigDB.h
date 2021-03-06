/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEODefaultsDBDict, geo_isolater, GEOSQLiteDB, _GEOConfigDBOperationQueue;

@interface _GEOConfigDB : NSObject {

	GEODefaultsDBDict* _cache;
	geo_isolater* _isolator;
	Aq _lastId;
	GEOSQLiteDB* _db;
	_GEOConfigDBOperationQueue* _operationQueue;
	/*function pointer*/void* _clearFunction;
	/*function pointer*/void* _setFunction;
	/*function pointer*/void* _addFunction;

}

@property (nonatomic,readonly) GEOSQLiteDB * db;                                         //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) _GEOConfigDBOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* clearFunction;                  //@synthesize clearFunction=_clearFunction - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* setFunction;                    //@synthesize setFunction=_setFunction - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* addFunction;                    //@synthesize addFunction=_addFunction - In the implementation block
-(_GEOConfigDBOperationQueue *)operationQueue;
-(GEOSQLiteDB *)db;
-(id)init:(id)arg1 cache:(id)arg2 operationQueue:(id)arg3 clearFunction:(/*function pointer*/void*)arg4 setFunction:(/*function pointer*/void*)arg5 addFunction:(/*function pointer*/void*)arg6 tableName:(id)arg7 ;
-(void)withCache:(/*^block*/id)arg1 ;
-(/*function pointer*/void*)addFunction;
-(/*function pointer*/void*)setFunction;
-(/*function pointer*/void*)clearFunction;
-(long long)nextId;
@end

