/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTEventFilter.h>

@class NSString, JSContext, NSError, NSOperationQueue;

@interface MTJSContextEventFilter : NSObject <MTEventFilter> {

	NSString* _script;
	NSString* _functionName;
	JSContext* _jsContext;
	NSError* _lastError;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSString * script;                              //@synthesize script=_script - In the implementation block
@property (nonatomic,retain) NSString * functionName;                        //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) JSContext * jsContext;                          //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,retain) NSError * lastError;                            //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSString *)functionName;
-(id)apply:(id)arg1 ;
-(NSError *)lastError;
-(void)setLastError:(NSError *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(JSContext *)jsContext;
-(void)setJsContext:(JSContext *)arg1 ;
-(void)setScript:(NSString *)arg1 ;
-(NSString *)script;
-(id)initWithJSContext:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3 ;
-(void)_applyFilter:(id)arg1 promise:(id)arg2 ;
-(id)initWithScript:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3 ;
@end

