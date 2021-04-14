/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DACardDAV/DAContact.h>

@class CNMutableContact, NSString;

@interface DAContactsContact : NSObject <DAContact> {

	BOOL _markedForDeletion;
	CNMutableContact* _mutableContact;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact;              //@synthesize mutableContact=_mutableContact - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                           //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(BOOL)isContact;
-(CNMutableContact *)mutableContact;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)asContact;
-(void*)asPerson;
@end

