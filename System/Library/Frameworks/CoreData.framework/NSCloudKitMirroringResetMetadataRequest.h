/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToReset;

}

@property (nonatomic,copy) NSSet * objectIDsToReset;              //@synthesize objectIDsToReset=_objectIDsToReset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSSet *)objectIDsToReset;
-(void)setObjectIDsToReset:(NSSet *)arg1 ;
@end

