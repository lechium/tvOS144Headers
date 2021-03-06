/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, CPLServerFeedbackMessage, NSString, NSDictionary;

@interface CPLSerializedFeedbackMessage : NSObject {

	NSUUID* _uuid;
	CPLServerFeedbackMessage* _serverMessage;
	NSString* _feedbackType;

}

@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * feedbackType;                               //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) CPLServerFeedbackMessage * serverMessage;              //@synthesize serverMessage=_serverMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)plistRepresentationForMessages:(id)arg1 ;
+(id)messagesForPlistRepresentation:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(NSUUID *)uuid;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)feedbackType;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(CPLServerFeedbackMessage *)serverMessage;
@end

