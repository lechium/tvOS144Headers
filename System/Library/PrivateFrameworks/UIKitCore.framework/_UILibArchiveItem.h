/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIArchiveItem.h>

@interface _UILibArchiveItem : _UIArchiveItem {

	ui_archive_entryRef _underlyingArchiveEntry;
	ui_archiveRef _underlyingArchive;

}

@property (readonly) ui_archive_entryRef underlyingArchiveEntry;              //@synthesize underlyingArchiveEntry=_underlyingArchiveEntry - In the implementation block
@property (readonly) ui_archiveRef underlyingArchive;                         //@synthesize underlyingArchive=_underlyingArchive - In the implementation block
+(id)itemByReadingAttributesFromUnderlyingArchiveEntry:(ui_archive_entryRef)arg1 archive:(ui_archiveRef)arg2 ;
-(ui_archive_entryRef)underlyingArchiveEntry;
-(ui_archiveRef)underlyingArchive;
@end

