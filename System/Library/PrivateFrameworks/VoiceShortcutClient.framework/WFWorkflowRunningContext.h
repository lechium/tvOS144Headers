/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isShortcutsApp;
	BOOL _allowDialogNotifications;
	NSString* _identifier;
	NSString* _workflowIdentifier;
	NSDate* _creationDate;
	NSString* _automationType;
	NSString* _progressCategory;
	NSData* _serializedWorkflowControllerState;

}

@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * workflowIdentifier;                             //@synthesize workflowIdentifier=_workflowIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * progressCategory;                      //@synthesize progressCategory=_progressCategory - In the implementation block
@property (assign,nonatomic) BOOL isShortcutsApp;                                     //@synthesize isShortcutsApp=_isShortcutsApp - In the implementation block
@property (nonatomic,retain) NSData * serializedWorkflowControllerState;              //@synthesize serializedWorkflowControllerState=_serializedWorkflowControllerState - In the implementation block
@property (assign,nonatomic) BOOL allowDialogNotifications;                           //@synthesize allowDialogNotifications=_allowDialogNotifications - In the implementation block
@property (nonatomic,retain) NSString * automationType;                               //@synthesize automationType=_automationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)removeProgressSubscriber:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)initWithWorkflowIdentifier:(id)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(id)addProgressSubscriberUsingPublishingHandler:(/*^block*/id)arg1 ;
-(id)progressForPublishingWithTotalUnitCount:(long long)arg1 cancellationHandler:(/*^block*/id)arg2 ;
-(NSString *)workflowIdentifier;
-(void)setWorkflowIdentifier:(NSString *)arg1 ;
-(NSString *)progressCategory;
-(BOOL)isShortcutsApp;
-(void)setIsShortcutsApp:(BOOL)arg1 ;
-(NSData *)serializedWorkflowControllerState;
-(void)setSerializedWorkflowControllerState:(NSData *)arg1 ;
-(BOOL)allowDialogNotifications;
-(void)setAllowDialogNotifications:(BOOL)arg1 ;
@end

