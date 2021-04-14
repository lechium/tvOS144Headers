/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFConversationStorable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, AceObject, AFDialogPhase, NSString, AFDataStore;

@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying> {

	BOOL _virgin;
	BOOL _transient;
	BOOL _supplemental;
	BOOL _immersiveExperience;
	NSUUID* _identifier;
	NSUUID* _revisionIdentifier;
	long long _type;
	AceObject* _aceObject;
	AFDialogPhase* _dialogPhase;
	NSString* _aceCommandIdentifier;
	long long _presentationState;
	AFDataStore* _associatedDataStore;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * revisionIdentifier;                                 //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AceObject * aceObject;                                              //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,retain) AFDialogPhase * dialogPhase;                                        //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (nonatomic,copy) NSString * aceCommandIdentifier;                                      //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (assign,nonatomic) long long presentationState;                                        //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,getter=isVirgin,nonatomic) BOOL virgin;                                        //@synthesize virgin=_virgin - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                  //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isSupplemental,nonatomic) BOOL supplemental;                            //@synthesize supplemental=_supplemental - In the implementation block
@property (assign,getter=isImmersiveExperience,nonatomic) BOOL immersiveExperience;              //@synthesize immersiveExperience=_immersiveExperience - In the implementation block
@property (nonatomic,readonly) AFDataStore * associatedDataStore;                                //@synthesize associatedDataStore=_associatedDataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSUUID *)identifier;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(NSUUID *)revisionIdentifier;
-(long long)presentationState;
-(void)setPresentationState:(long long)arg1 ;
-(AFDialogPhase *)dialogPhase;
-(void)setDialogPhase:(AFDialogPhase *)arg1 ;
-(void)setImmersiveExperience:(BOOL)arg1 ;
-(void)setSupplemental:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(BOOL)arg8 transient:(BOOL)arg9 supplemental:(BOOL)arg10 immersiveExperience:(BOOL)arg11 associatedDataStore:(id)arg12 ;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(long long)arg5 aceCommandIdentifier:(id)arg6 virgin:(BOOL)arg7 transient:(BOOL)arg8 supplemental:(BOOL)arg9 immersiveExperience:(BOOL)arg10 associatedDataStore:(id)arg11 ;
-(AceObject *)aceObject;
-(NSString *)aceCommandIdentifier;
-(BOOL)isVirgin;
-(BOOL)isSupplemental;
-(BOOL)isImmersiveExperience;
-(AFDataStore *)associatedDataStore;
-(void)_didMutate;
-(id)_propertyListStringForType;
-(id)_propertyListStringForPresentationState;
-(id)propertyListRepresentation;
-(long long)_typeForPropertyListString:(id)arg1 ;
-(long long)_presentationStateForPropertyListString:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 transient:(BOOL)arg7 supplemental:(BOOL)arg8 immersiveExperience:(BOOL)arg9 associatedDataStore:(id)arg10 ;
-(void)setAceObject:(AceObject *)arg1 ;
-(void)setAceCommandIdentifier:(NSString *)arg1 ;
-(void)setVirgin:(BOOL)arg1 ;
@end

