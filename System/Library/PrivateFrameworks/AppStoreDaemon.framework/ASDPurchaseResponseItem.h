/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, ASDPurchase, NSString, NSArray, NSDictionary;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding> {

	BOOL _success;
	BOOL _cancelsPurchaseBatch;
	NSError* _error;
	ASDPurchase* _purchase;
	NSString* _bundleID;
	NSArray* _results;
	double _requestStartTime;
	double _responseEndTime;
	double _responseStartTime;
	NSDictionary* _responseMetrics;
	NSDictionary* _transationIDs;

}

@property (assign,nonatomic) double requestStartTime;                       //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                        //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                      //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseMetrics;              //@synthesize responseMetrics=_responseMetrics - In the implementation block
@property (nonatomic,readonly) NSDictionary * transationIDs;                //@synthesize transationIDs=_transationIDs - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) ASDPurchase * purchase;                 //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL success;                                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL cancelsPurchaseBatch;                   //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSString *)bundleID;
-(void)_setError:(id)arg1 ;
-(NSArray *)results;
-(BOOL)success;
-(ASDPurchase *)purchase;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(double)responseEndTime;
-(double)responseStartTime;
-(void)setResponseStartTime:(double)arg1 ;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(NSDictionary *)responseMetrics;
-(BOOL)cancelsPurchaseBatch;
-(id)initWithResults:(id)arg1 ;
-(void)_setSuccess:(BOOL)arg1 ;
-(void)_setBundleID:(id)arg1 ;
-(void)_setPurchase:(id)arg1 ;
-(void)_setResponseMetrics:(id)arg1 ;
-(void)_setTransactionIDs:(id)arg1 ;
-(NSDictionary *)transationIDs;
@end
