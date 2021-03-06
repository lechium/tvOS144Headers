/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ENExposureDetectionDaemonSessionStatistics : NSObject <NSCopying> {

	unsigned long long _droppedKeyCount;
	unsigned long long _droppedCachedKeyUpdatesCount;
	unsigned long long _fileKeyCount;
	unsigned long long _fileInvalidKeyCount;
	unsigned long long _invalidFileSignatureCount;
	unsigned long long _matchedKeyCount;
	unsigned long long _newCachedKeyCount;
	unsigned long long _processedFileCount;
	unsigned long long _revokedKeyCount;
	unsigned long long _updatedCachedKeyCount;

}

@property (assign,nonatomic) unsigned long long droppedCachedKeyUpdatesCount;              //@synthesize droppedCachedKeyUpdatesCount=_droppedCachedKeyUpdatesCount - In the implementation block
@property (assign,nonatomic) unsigned long long droppedKeyCount;                           //@synthesize droppedKeyCount=_droppedKeyCount - In the implementation block
@property (assign,nonatomic) unsigned long long fileKeyCount;                              //@synthesize fileKeyCount=_fileKeyCount - In the implementation block
@property (assign,nonatomic) unsigned long long fileInvalidKeyCount;                       //@synthesize fileInvalidKeyCount=_fileInvalidKeyCount - In the implementation block
@property (assign,nonatomic) unsigned long long invalidFileSignatureCount;                 //@synthesize invalidFileSignatureCount=_invalidFileSignatureCount - In the implementation block
@property (assign,nonatomic) unsigned long long matchedKeyCount;                           //@synthesize matchedKeyCount=_matchedKeyCount - In the implementation block
@property (assign,nonatomic) unsigned long long newCachedKeyCount;                         //@synthesize newCachedKeyCount=_newCachedKeyCount - In the implementation block
@property (assign,nonatomic) unsigned long long processedFileCount;                        //@synthesize processedFileCount=_processedFileCount - In the implementation block
@property (assign,nonatomic) unsigned long long revokedKeyCount;                           //@synthesize revokedKeyCount=_revokedKeyCount - In the implementation block
@property (assign,nonatomic) unsigned long long updatedCachedKeyCount;                     //@synthesize updatedCachedKeyCount=_updatedCachedKeyCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)matchedKeyCount;
-(void)setMatchedKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)invalidFileSignatureCount;
-(void)setInvalidFileSignatureCount:(unsigned long long)arg1 ;
-(unsigned long long)droppedCachedKeyUpdatesCount;
-(void)setDroppedCachedKeyUpdatesCount:(unsigned long long)arg1 ;
-(unsigned long long)droppedKeyCount;
-(void)setDroppedKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)fileKeyCount;
-(void)setFileKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)newCachedKeyCount;
-(void)setNewCachedKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)revokedKeyCount;
-(void)setRevokedKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)updatedCachedKeyCount;
-(void)setUpdatedCachedKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)fileInvalidKeyCount;
-(void)setFileInvalidKeyCount:(unsigned long long)arg1 ;
-(unsigned long long)processedFileCount;
-(void)setProcessedFileCount:(unsigned long long)arg1 ;
@end

