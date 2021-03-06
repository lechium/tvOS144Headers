/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ENNoteStoreClient.h>

@protocol ENBusinessNoteStoreClientDelegate;
@class NSString;

@interface ENBusinessNoteStoreClient : ENNoteStoreClient {

	id<ENBusinessNoteStoreClientDelegate> _delegate;
	NSString* _noteStoreUrl;

}

@property (assign,nonatomic,__weak) id<ENBusinessNoteStoreClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * noteStoreUrl;                                              //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
+(id)noteStoreClientForBusiness;
-(id<ENBusinessNoteStoreClientDelegate>)delegate;
-(void)setDelegate:(id<ENBusinessNoteStoreClientDelegate>)arg1 ;
-(id)authenticationToken;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(void)createBusinessNotebook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createBusinessNotebook:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

