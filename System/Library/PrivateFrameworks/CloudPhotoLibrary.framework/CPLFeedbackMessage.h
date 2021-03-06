/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString, CPLServerFeedbackMessage;

@interface CPLFeedbackMessage : NSObject {

	NSDate* _creationDate;
	NSString* _feedbackType;

}

@property (nonatomic,readonly) NSString * feedbackType;                               //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) CPLServerFeedbackMessage * serverMessage; 
+(id)feedbackType;
-(id)init;
-(NSString *)feedbackType;
-(CPLServerFeedbackMessage *)serverMessage;
@end

