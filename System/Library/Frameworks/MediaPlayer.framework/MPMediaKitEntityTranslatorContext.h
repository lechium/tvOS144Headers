/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPMediaKitEntityRelationshipPayloadProvider;
@class NSString;

@interface MPMediaKitEntityTranslatorContext : NSObject {

	NSString* _personID;
	id<MPMediaKitEntityRelationshipPayloadProvider> _relationshipPayloadProvider;

}

@property (nonatomic,copy) NSString * personID;                                                                        //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) id<MPMediaKitEntityRelationshipPayloadProvider> relationshipPayloadProvider;              //@synthesize relationshipPayloadProvider=_relationshipPayloadProvider - In the implementation block
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(id<MPMediaKitEntityRelationshipPayloadProvider>)relationshipPayloadProvider;
-(void)setRelationshipPayloadProvider:(id<MPMediaKitEntityRelationshipPayloadProvider>)arg1 ;
@end

