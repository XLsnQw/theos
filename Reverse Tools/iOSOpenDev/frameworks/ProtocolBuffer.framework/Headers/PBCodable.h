/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <ProtocolBuffer/XXUnknownSuperclass.h>

@class NSData;

@interface PBCodable : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x467d; @dynamic
- (id)dictionaryRepresentation;	// 0x4741
- (void)writeTo:(id)to;	// 0x472d
- (BOOL)readFrom:(id)from;	// 0x4711
// declared property getter: - (id)data;	// 0x467d
- (id)initWithData:(id)data;	// 0x45a5
- (id)init;	// 0x4579
@end