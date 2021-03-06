/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseAceObject.h>
#import <libobjc.A.dylib/AFAceCommandClientFeedbackEnumerating.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, SADialog, NSString, SAUIListenAfterSpeakingBehavior, NSDictionary;

@interface SAAceView : SABaseAceObject <AFAceCommandClientFeedbackEnumerating, SAAceSerializable>

@property (assign,nonatomic) BOOL canBeRefreshed; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSNumber * deferredRendering; 
@property (nonatomic,retain) SADialog * dialog; 
@property (assign,nonatomic) BOOL isTransient; 
@property (nonatomic,copy) NSString * itemType; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,retain) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceView;
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_af_enumerateClientFeedbackDetails:(/*^block*/id)arg1 ;
-(id)_af_dialogPhase;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(BOOL)isTransient;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(SADialog *)dialog;
-(void)setSpeakableText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)viewId;
-(void)setViewId:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(void)setListenAfterSpeakingBehavior:(SAUIListenAfterSpeakingBehavior *)arg1 ;
-(NSString *)speakableText;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(BOOL)canBeRefreshed;
-(void)setCanBeRefreshed:(BOOL)arg1 ;
-(NSNumber *)deferredRendering;
-(void)setDeferredRendering:(NSNumber *)arg1 ;
-(void)setDialog:(SADialog *)arg1 ;
-(void)setIsTransient:(BOOL)arg1 ;
@end

