/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, _DKKnowledgeQuerying;
@class NSObject, NSString, NSDate, _CDDataCollectionSession, _CDEventStreamsRegister;

@interface _CDDataCollection : NSObject {

	BOOL _selectedForDataCollection;
	BOOL _deleteSessionOnCleanup;
	NSObject*<OS_xpc_object> _activity;
	id<_DKKnowledgeQuerying> _storage;
	/*^block*/id _submissionBlock;
	NSString* _dataDirectory;
	NSString* _sessionPath;
	NSDate* _collectionDate;
	_CDDataCollectionSession* _session;
	double _samplingRate;
	unsigned long long _daysPerBatch;
	unsigned long long _maxBatches;
	_CDEventStreamsRegister* _eventStreamsRegister;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> storage;               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) id submissionBlock;                                 //@synthesize submissionBlock=_submissionBlock - In the implementation block
-(id<_DKKnowledgeQuerying>)storage;
-(void)execute;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 eventStreams:(id)arg8 maxBatches:(unsigned long long)arg9 ;
-(id)submissionBlock;
-(id)initWithStorage:(id)arg1 activity:(id)arg2 ;
-(void)setSubmissionBlock:(id)arg1 ;
@end

