/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSContainer : LPMedia
+(id)allAPFSContainers;
+(id)diagsContainer;
+(id)supportedContentTypes;
-(id)updateVolume;
-(id)volumesWithRole:(int)arg1 ;
-(id)addVolumeWithName:(id)arg1 role:(int)arg2 caseSensitive:(BOOL)arg3 reserveSize:(long long)arg4 quotaSize:(long long)arg5 pairedVolume:(id)arg6 error:(id*)arg7 ;
-(id)physicalStores;
-(id)prebootVolume;
-(id)recoveryVolume;
-(id)volumes;
@end

