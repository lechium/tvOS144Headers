/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFCommandExecutionInfoMutating.h>

@class AFCommandExecutionInfo, NSString, AFPeerInfo, NSDictionary;

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating> {

	AFCommandExecutionInfo* _baseModel;
	NSString* _executionID;
	NSString* _requestID;
	AFPeerInfo* _originPeerInfo;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasExecutionID : 1;
		unsigned hasRequestID : 1;
		unsigned hasOriginPeerInfo : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUserInfo:(id)arg1 ;
-(void)setRequestID:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setExecutionID:(id)arg1 ;
-(void)setOriginPeerInfo:(id)arg1 ;
@end

