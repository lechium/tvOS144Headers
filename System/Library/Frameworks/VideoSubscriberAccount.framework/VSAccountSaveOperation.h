/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSArray, VSPersistentStorage, VSAccountChannels, NSOperation;

@interface VSAccountSaveOperation : VSAsyncOperation {

	VSOptional* _result;
	NSArray* _unsavedAccounts;
	VSPersistentStorage* _storage;
	VSAccountChannels* _unsavedChannels;
	NSOperation* _currentOperation;

}

@property (nonatomic,copy) NSArray * unsavedAccounts;                          //@synthesize unsavedAccounts=_unsavedAccounts - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                    //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSAccountChannels * unsavedChannels;              //@synthesize unsavedChannels=_unsavedChannels - In the implementation block
@property (nonatomic,retain) VSOptional * result;                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperation * currentOperation;                   //@synthesize currentOperation=_currentOperation - In the implementation block
-(id)init;
-(VSPersistentStorage *)storage;
-(void)cancel;
-(NSOperation *)currentOperation;
-(VSOptional *)result;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)initWithUnsavedAccounts:(id)arg1 channels:(id)arg2 storage:(id)arg3 ;
-(NSArray *)unsavedAccounts;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
-(void)_startAccountChannelsSaveOperation;
-(void)setCurrentOperation:(NSOperation *)arg1 ;
-(VSAccountChannels *)unsavedChannels;
-(void)_startCredentialSaveOperation;
-(void)setUnsavedChannels:(VSAccountChannels *)arg1 ;
@end

