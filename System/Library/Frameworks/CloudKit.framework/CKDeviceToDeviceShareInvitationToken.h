/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _sharingInvitationData;
	NSURL* _shareURL;

}

@property (nonatomic,copy,readonly) NSData * sharingInvitationData;              //@synthesize sharingInvitationData=_sharingInvitationData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * shareURL;                            //@synthesize shareURL=_shareURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(NSData *)sharingInvitationData;
-(NSURL *)shareURL;
-(id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2 ;
@end

