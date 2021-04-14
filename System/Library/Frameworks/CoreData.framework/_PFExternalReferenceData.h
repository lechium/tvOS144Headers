/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface _PFExternalReferenceData : NSData {

	NSData* _originalData;
	void* _bytesPtrForStore;
	unsigned long long _bytesLengthForStore;
	void* _bytesPtrForExternalReference;
	unsigned long long _bytesLengthForExternalReference;
	NSString* _externalReferenceLocation;
	NSString* _safeguardLocation;
	id _ubiquitousLocation;
	struct {
		unsigned _isStoredExternally : 1;
		unsigned _hasMappedData : 1;
		unsigned _cleanupOnDealloc : 1;
		unsigned _dataProtectionLevel : 3;
		unsigned _isStoredUbiquitously : 1;
		unsigned _createdByUbiquityImport : 1;
		unsigned _reserved : 24;
	}  _externalDataFlags;

}
+(Class)classForKeyedUnarchiver;
+(BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)arg1 ;
+(BOOL)_releaseReservedMapFileDescriptor;
+(BOOL)_reserveMapFileDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(id)copy;
-(id)description;
-(void)dealloc;
-(id)mutableCopy;
-(void)finalize;
-(unsigned long long)length;
-(const void*)bytes;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)UUID;
-(id)subdataWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ;
-(BOOL)hasExternalReferenceContent;
-(const char*)_externalReferenceLocation;
-(id)_originalData;
-(const char*)_safeguardLocation;
-(int)preferredProtectionLevel;
-(unsigned long long)_bytesLengthForExternalReference;
-(void)doCleanupOnDealloc;
-(id)_safeguardLocationString;
-(id)externalReferenceLocationString;
-(const void*)_bytesPtrForStore;
-(unsigned long long)_bytesLengthForStore;
-(const void*)_bytesPtrForExternalReference;
-(id)initForUbiquityDictionary:(id)arg1 store:(id)arg2 ;
-(id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4 ;
-(void)_setBytesForExternalReference:(const void*)arg1 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(id)databaseValue;
-(BOOL)_createdByUbiquityImport;
@end
