/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _momentShares;
	NSDictionary* _invitationsByMomentShareObjectID;

}

@property (nonatomic,readonly) PHFetchResult * momentShares;                                 //@synthesize momentShares=_momentShares - In the implementation block
@property (nonatomic,readonly) NSDictionary * invitationsByMomentShareObjectID;              //@synthesize invitationsByMomentShareObjectID=_invitationsByMomentShareObjectID - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(PHFetchResult *)momentShares;
-(NSDictionary *)invitationsByMomentShareObjectID;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2 ;
@end

