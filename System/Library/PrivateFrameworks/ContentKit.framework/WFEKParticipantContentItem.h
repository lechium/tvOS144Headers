/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(id)possibleRoles;
+(id)possibleStatuses;
-(id)status;
-(id)role;
-(BOOL)isCurrentUser;
-(id)participant;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)canGenerateContact;
@end

