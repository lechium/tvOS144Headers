/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/SKProductsRequestDelegate.h>

@class SKProductsRequest, TVLLegacyJSContext, NSString;

@interface TVLJSSKProductsRequest : NSObject <SKProductsRequestDelegate> {

	BOOL _isJSObjectProtected;
	SKProductsRequest* _skRequest;
	TVLLegacyJSContext* _atvContext;
	OpaqueJSValueRef _object;

}

@property (nonatomic,retain) SKProductsRequest * skRequest;                //@synthesize skRequest=_skRequest - In the implementation block
@property (nonatomic,retain) TVLLegacyJSContext * atvContext;              //@synthesize atvContext=_atvContext - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef object;                      //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL isJSObjectProtected;                     //@synthesize isJSObjectProtected=_isJSObjectProtected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)dealloc;
-(void)setObject:(OpaqueJSValueRef)arg1 ;
-(OpaqueJSValueRef)object;
-(void)requestDidFinish:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(SKProductsRequest *)skRequest;
-(void)setSkRequest:(SKProductsRequest *)arg1 ;
-(void)setAtvContext:(TVLLegacyJSContext *)arg1 ;
-(TVLLegacyJSContext *)atvContext;
-(BOOL)isJSObjectProtected;
-(void)setIsJSObjectProtected:(BOOL)arg1 ;
@end

