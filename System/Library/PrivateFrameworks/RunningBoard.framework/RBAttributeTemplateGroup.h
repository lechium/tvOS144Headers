/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary, RBEntitlementPredicate;

@interface RBAttributeTemplateGroup : NSObject {

	NSArray* _attributes;
	NSDictionary* _targetBundleProperties;
	RBEntitlementPredicate* _originatorEntitlements;
	RBEntitlementPredicate* _targetEntitlements;
	NSDictionary* _additionalRestrictions;

}

@property (nonatomic,retain) NSArray * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * targetBundleProperties;              //@synthesize targetBundleProperties=_targetBundleProperties - In the implementation block
-(id)description;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSDictionary *)targetBundleProperties;
-(void)setTargetBundleProperties:(NSDictionary *)arg1 ;
@end
