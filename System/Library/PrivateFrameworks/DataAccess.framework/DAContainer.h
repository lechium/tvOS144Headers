/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DAContainer <DACardDAVRecord>
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@required
-(id)name;
-(void)setType:(long long)arg1;
-(long long)type;
-(void)setName:(id)arg1;
-(id)identifier;
-(BOOL)isLocal;
-(void)setAccountIdentifier:(id)arg1;
-(id)accountIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1;
-(id)meContactIdentifier;
-(id)cTag;
-(void)setCTag:(id)arg1;
-(id)syncTag;
-(void)setSyncTag:(id)arg1;
-(id)syncData;
-(void)setSyncData:(id)arg1;
-(void)setMeContactIdentifier:(id)arg1;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(void*)asSource;
-(id)asContainer;

@end

