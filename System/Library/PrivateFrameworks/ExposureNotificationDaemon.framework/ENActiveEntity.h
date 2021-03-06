/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENEntity;

@interface ENActiveEntity : NSObject <NSSecureCoding, NSCopying> {

	int _activeStatus;
	ENEntity* _entity;

}

@property (nonatomic,copy) ENEntity * entity;               //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) int activeStatus;              //@synthesize activeStatus=_activeStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ENEntity *)entity;
-(void)setEntity:(ENEntity *)arg1 ;
-(id)initWithEntity:(id)arg1 activeStatus:(int)arg2 ;
-(int)activeStatus;
-(void)setActiveStatus:(int)arg1 ;
@end

