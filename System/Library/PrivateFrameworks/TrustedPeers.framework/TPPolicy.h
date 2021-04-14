/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPPolicyVersion, NSArray, NSDictionary, NSSet;

@interface TPPolicy : NSObject <NSSecureCoding> {

	BOOL _unknownRedactions;
	TPPolicyVersion* _version;
	NSArray* _modelToCategory;
	NSDictionary* _categoriesByView;
	NSDictionary* _introducersByCategory;
	NSArray* _keyViewMapping;
	NSSet* _userControllableViewList;
	NSSet* _piggybackViews;

}

@property (nonatomic,retain) TPPolicyVersion * version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * modelToCategory;                         //@synthesize modelToCategory=_modelToCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesByView;                   //@synthesize categoriesByView=_categoriesByView - In the implementation block
@property (nonatomic,retain) NSDictionary * introducersByCategory;              //@synthesize introducersByCategory=_introducersByCategory - In the implementation block
@property (nonatomic,retain) NSArray * keyViewMapping;                          //@synthesize keyViewMapping=_keyViewMapping - In the implementation block
@property (nonatomic,retain) NSSet * userControllableViewList;                  //@synthesize userControllableViewList=_userControllableViewList - In the implementation block
@property (nonatomic,retain) NSSet * piggybackViews;                            //@synthesize piggybackViews=_piggybackViews - In the implementation block
@property (assign) BOOL unknownRedactions;                                      //@synthesize unknownRedactions=_unknownRedactions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(BOOL)arg5 userControllableViewList:(id)arg6 piggybackViews:(id)arg7 version:(id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPPolicyVersion *)version;
-(void)setVersion:(TPPolicyVersion *)arg1 ;
-(id)categoryForModel:(id)arg1 ;
-(BOOL)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2 ;
-(BOOL)peerInCategory:(id)arg1 canAccessView:(id)arg2 ;
-(id)syncingPolicyForModel:(id)arg1 syncUserControllableViews:(int)arg2 error:(id*)arg3 ;
-(id)viewsForModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToPolicy:(id)arg1 ;
-(NSArray *)modelToCategory;
-(void)setModelToCategory:(NSArray *)arg1 ;
-(NSDictionary *)categoriesByView;
-(void)setCategoriesByView:(NSDictionary *)arg1 ;
-(NSDictionary *)introducersByCategory;
-(void)setIntroducersByCategory:(NSDictionary *)arg1 ;
-(NSArray *)keyViewMapping;
-(void)setKeyViewMapping:(NSArray *)arg1 ;
-(NSSet *)userControllableViewList;
-(void)setUserControllableViewList:(NSSet *)arg1 ;
-(NSSet *)piggybackViews;
-(void)setPiggybackViews:(NSSet *)arg1 ;
-(BOOL)unknownRedactions;
-(void)setUnknownRedactions:(BOOL)arg1 ;
@end

