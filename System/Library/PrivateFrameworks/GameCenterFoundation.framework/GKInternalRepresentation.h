/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
+(id)codedPropertyKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(void)mergePropertiesFrom:(id)arg1 ;
@end

